SELECT E.Fname, E.Minit, E.Lname, (E.Salary + E.Salary * 0.1) AS Salary
FROM k_works_on W JOIN k_project P ON P.Pnumber = W.Pno  
JOIN k_employee E ON  W.Essn = E.ssn
WHERE P.Pname = 'ProductX'