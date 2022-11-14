
public class AccountChecker {

    private String accountName;

    public AccountChecker (String account) {
        this.accountName = account;
    }

    public boolean isValid(String account) {
        return (account == this.accountName);
    }

}
