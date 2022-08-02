/**
 * Program
 */
public class Program {

    public static void main(String[] args) {
        BankAccountFacade bankAccountFacade = new BankAccountFacade("TruongNXdacc", 1234);
        bankAccountFacade.depositCash(1000000.00);
        bankAccountFacade.withdrawCash(900000.00);
    }
}