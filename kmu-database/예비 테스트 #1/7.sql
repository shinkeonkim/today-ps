SELECT E.Ssn, D.Dname
FROM k_employee E CROSS JOIN k_department D 
ORDER BY E.Ssn, D.Dname