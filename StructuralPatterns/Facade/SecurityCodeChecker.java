
public class SecurityCodeChecker {

    private int securityCode;

    public SecurityCodeChecker(int secCode) {
        this.securityCode = secCode;
    }

    public boolean isValid(int privateCode) {
        return (securityCode == privateCode);
    }

}
