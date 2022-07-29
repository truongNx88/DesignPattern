package Base;

public class VideoData extends Subject {
    private String _title;
    private String _description;
    private String _fileName;

    public String getTitle() {
        return _title;
    }

    public void setTitle(String title) {
        _title = title;
        videoDataChanged();
    }

    public String getDescription() {
        return _description;
    }

    public void setDescription(String description) {
        _description = description;
        videoDataChanged();
    }

    public String getFileName() {
        return _fileName;
    }

    public void setFileName(String fileName) {
        _fileName = fileName;
        videoDataChanged();
    }

    private void videoDataChanged() {
        NotifyObservers(this, null);
    }
}
