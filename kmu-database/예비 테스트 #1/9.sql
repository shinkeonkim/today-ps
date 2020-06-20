SELECT E.Fname, E.Minit, E.Lname, E.Address
FROM k_employee E
WHERE address LIKE '%Houston, TX%'
ORDER BY Fname