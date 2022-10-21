package Base;

import java.util.ArrayList;
import java.util.List;

/**
 * Subject
 */
public class Subject {
    private List<Observer> _observers = new ArrayList<Observer>();

    public void AttachObserver(Observer observer) {
        _observers.add(observer);
    }

    public void DetachObserver(Observer observer) {
        _observers.remove(observer);
    }

    public void NotifyObservers(Subject subject, Object arg) {
        _observers.forEach( (observer)-> observer.Notify(subject, arg));
    }
}