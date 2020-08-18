/*
 * Employee.h
 *
 *  Created on: 09 Ağu 2020
 *      Author: ehven
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include<iostream>

using namespace std;

// Çalışanlar için bir class prototipi oluşturuldu
class Employee{
public:
	string name;
	int id;
	int salary;

	void showInfos(); // bu metod bilgileri ekrana yazar

};

#endif /* EMPLOYEE_H_ */
