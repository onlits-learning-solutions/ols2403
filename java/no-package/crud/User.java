import java.sql.Connection;
import java.sql.DriverManager;

class User {
    private String userId;
    private String name;
    private String password;

    public void signup() {
        Connection connection = DriverManager.getConnection();
    }

    public void login() {
        
    }
}