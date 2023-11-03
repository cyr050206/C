import javax.swing.*;
import java.awt.*;
import java.awt.image.BufferedImage;

public class SpinningDonut extends JPanel {
    private double theta = 0;
    private double phi = 0;

    public SpinningDonut() {
        Timer timer = new Timer(10, e -> {
            theta += 0.02;
            phi += 0.02;
            repaint();
        });
        timer.start();
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);

        int width = getWidth();
        int height = getHeight();

        BufferedImage image = new BufferedImage(width, height, BufferedImage.TYPE_INT_RGB);
        Graphics2D g2d = image.createGraphics();

        g2d.setColor(Color.BLACK);
        g2d.fillRect(0, 0, width, height);

        int donutRadius = 50;
        int spacialFrequency = 5;

        for (double i = 0; i < 2 * Math.PI; i += 0.02) {
            for (double j = 0; j < 2 * Math.PI; j += 0.02) {
                double x = Math.cos(i) * (donutRadius + Math.cos(j) * spacialFrequency);
                double y = Math.sin(i) * (donutRadius + Math.cos(j) * spacialFrequency);
                double z = Math.sin(j) * spacialFrequency;

                double xRotated = x * Math.cos(theta) - z * Math.sin(theta);
                double zRotated = x * Math.sin(theta) + z * Math.cos(theta);
                x = xRotated;
                z = zRotated;

                double yRotated = y * Math.cos(phi) - z * Math.sin(phi);
                zRotated = y * Math.sin(phi) + z * Math.cos(phi);
                y = yRotated;
                z = zRotated;

                int screenX = (int) (width / 2 + x * 4);
                int screenY = (int) (height / 2 + y * 4);

                int shade = (int) ((z + 2) * 8);
                shade = Math.max(0, Math.min(255, shade));
                g2d.setColor(new Color(shade, shade, shade));
                g2d.fillRect(screenX, screenY, 2, 2);
            }
        }

        g.drawImage(image, 0, 0, this);
        g2d.dispose();
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            JFrame frame = new JFrame("Porn Donut");
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.add(new SpinningDonut());
            frame.setSize(400, 400);
            frame.setLocationRelativeTo(null);
            frame.setVisible(true);
        });
    }
}
