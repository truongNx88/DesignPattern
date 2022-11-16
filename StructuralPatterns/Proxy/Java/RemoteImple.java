public class RemoteImple implements Remote {

    @Override
    public void turnOn() {
        System.out.println("Turn on light");
    }

    @Override
    public void turnOff() {
        System.out.println("Turn off light");
    }
    
}
