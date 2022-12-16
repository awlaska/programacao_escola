package ex2;

public class Cliente extends Utilizador implements IUser, ICostumer{
    @Override
    public boolean login(String username, String pwd) {
        return false;
    }
}
