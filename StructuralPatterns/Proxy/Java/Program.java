public class Program {
    public static void main(String[] args) {
        Remote remote = new LazyRemoteProxy();
        remote.turnOn();
        remote.turnOff();
    }
}
