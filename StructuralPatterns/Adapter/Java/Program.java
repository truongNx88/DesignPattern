import java.util.ArrayList;
import java.util.Arrays;

/**
 * Program
 */
public class Program {

    public static void main(String[] args) {
        // ArrayList<IShape> shapes = new ArrayList<IShape>() { new LineAdapter(new LegacyLine()), new RectangleAdapter(new LegacyRectangle())};
        ArrayList<IShape> shapes = new ArrayList<IShape>(Arrays.asList(new LineAdapter(new LegacyLine()), new RectangleAdapter(new LegacyRectangle()))) ;
        int x1 = 5, y1 = 10, x2 =-3, y2 =2;
        shapes.forEach(shape -> shape.Draw(x1, x2, y1, y2));
    }
    
}
