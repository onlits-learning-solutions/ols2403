package ols2403.resumebuilder;

public class ContactInformation {

    private String name;    //instance variable
    private String address;
    private String email;
    private String contactNumber;
    private String github;

    public void setName(String name) {  //local variable
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getAddress() {
        return address;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getEmail() {
        return email;
    }

    public void setContactNumber (String contactNumber) {
        this.contactNumber = contactNumber;
    }

    public String getContactNumber() {
        return contactNumber;
    }

    public void setGithub(String github) {
        this.github = github;
    }

    public String getGithub() {
        return github;
    }
}
