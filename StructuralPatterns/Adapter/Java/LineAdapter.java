public class LineAdapter implements IShape {

    private LegacyLine legacyLine;

    public LineAdapter(LegacyLine legacyLine) {
        this.legacyLine = legacyLine;
    }

    @Override
    public void Draw(int x1, int y1, int x2, int y2) {
        legacyLine.Draw(x1, y1, x2, y2);
    }
    
}
