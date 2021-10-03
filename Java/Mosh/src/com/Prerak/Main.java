package com.Prerak;

public class Main {

    public static void main(String[] args) {
	// write your code here
        var employee = new Employee();
        employee.setBaseSalary(1);
        System.out.println(employee.getBaseSalary());
        employee.setHourlyRate(-20);
        System.out.println(employee.getHourlyRate());
        int wage = employee.calculateWage(10);
        System.out.println(wage);

    }
}
