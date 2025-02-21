package ols2403.resumebuilder;

import java.util.Scanner;

public class Resume {
    private ContactInformation contactInformation;
    private String summary;
    private String[] skill;

    public void setContactInformation(ContactInformation contactInformation){
        this.contactInformation = contactInformation;
    }

    public ContactInformation getContactInformation() {
        return contactInformation;
    }

    public void setSummary(String summary) {
        this.summary = summary;
    }

    public String getSummanry() {
        return summary;
    }

    public void setSkills(String[] skill) {
        this.skill = skill;
    }

    public void inputForm() {
        contactInformation = new ContactInformation();
        Scanner scanner = new Scanner(System.in);
        System.out.println("Create your resume:");
        System.out.print("Enter your name: ");
        contactInformation.setName(scanner.nextLine());
    }

    public void showResume() {

    }
}