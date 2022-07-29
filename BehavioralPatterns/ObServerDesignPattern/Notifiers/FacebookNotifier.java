package Notifiers;

import Base.Observer;
import Base.Subject;
import Base.VideoData;

public class FacebookNotifier extends Observer {
    public FacebookNotifier(Subject subject) {
        this.subject = subject;
        this.subject.AttachObserver(this);
    }

    @Override
    public void Notify(Subject subject, Object arg) {
        if (subject instanceof VideoData) {
            VideoData data = (VideoData) subject;
            System.out.println(
                String.format( "Notify all subcribers via Facebook with new data "
                + "\n\tName: %s" 
                + "\n\tDescription: %s"
                + "\n\tFile name: %s",
                data.getTitle(), data.getDescription(), data.getFileName())
            );
        }
    }
}
