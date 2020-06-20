SELECT E.Fname, E.Minit, E.Lname, E.address
FROM k_employee E join k_department D on E.dno = D.Dnumber
where D.Dname = "Research"