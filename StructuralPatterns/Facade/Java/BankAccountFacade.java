
public class BankAccountFacade {

    private String account;
    private int privateCode;
    AccountChecker accountChecker;
    SecurityCodeChecker securityCodeChecker;
    CashManager cashManager;
    // private double 

    public BankAccountFacade(String account, int privateCode) {
        this.account = account;
        this.privateCode = privateCode;
        securityCodeChecker = new SecurityCodeChecker(privateCode);
        accountChecker = new AccountChecker(account);
        cashManager = new CashManager(1000.00);
    }

    public void depositCash(double cashAmount) {
        if (accountChecker.isValid(account) && securityCodeChecker.isValid(privateCode)) {
            cashManager.deposit(cashAmount);
            System.out.println("Hoan thanh");
        }
        else {
            System.out.println("Loi roi nhe");
        }
    }

    public void withdrawCash(double cashAmount) {
        if (accountChecker.isValid(account) 
                && securityCodeChecker.isValid(privateCode) 
                && cashManager.hasEnoughMoney(cashAmount)) {
            cashManager.withdraw(cashAmount);
            System.out.println("Hoan thanh");
        }
        else {
            System.out.println("Loi roi nhe");
        }
    }

}
