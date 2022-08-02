public class LazyRemoteProxy implements Remote {

    private RemoteImple remote = null;

    @Override
    public void turnOn() {
        System.out.println("TruongNXd " + this.remote);
        if (remote == null) {
            this.remote = new RemoteImple();
        }
        this.remote.turnOn();
        
    }

    @Override
    public void turnOff() {
        System.out.println("TruongNXd " + this.remote);
        if (remote == null) {
            this.remote = new RemoteImple();
        }
        this.remote.turnOn();
        
    }
    
}
