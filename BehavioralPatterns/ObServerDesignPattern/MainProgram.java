import javax.crypto.spec.DESKeySpec;

import Base.VideoData;
import Notifiers.EmailNotifier;
import Notifiers.FacebookNotifier;
import Notifiers.PhoneNotifier;
import Notifiers.YoutuberNotifier;

public class MainProgram {
    public static void main(String[] args) {
        VideoData videoData = new VideoData();
        EmailNotifier emailNotify = new EmailNotifier(videoData);
        PhoneNotifier phoneNotifier = new PhoneNotifier(videoData);
        YoutuberNotifier youtuberNotifier = new YoutuberNotifier(videoData);

        videoData.setTitle("Observer Design Pattern");

        videoData.DetachObserver(youtuberNotifier);
        System.out.println("-----------------------------------");
        videoData.setDescription("TruongNXd test");

        FacebookNotifier facebookNotifier = new FacebookNotifier(videoData);
        System.out.println("-----------------------------------");
        videoData.setDescription("TruongNXd Continuours");

    }
}
