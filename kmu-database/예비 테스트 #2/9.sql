SELECT D.Dname, DL.Dlocation, P.Pname, P.PLocation
FROM k_dept_locations DL JOIN k_department D ON DL.Dnumber = D.Dnumber
JOIN k_project P ON DL.Dlocation = P.Plocation
WHERE P.Dnum = D.Dnumber
ORDER BY D.Dname, P.Pname