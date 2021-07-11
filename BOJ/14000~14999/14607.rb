def f(n)
    return 0 if n <= 1
    return 1 if n == 2
    return 3 if n == 3
    if n % 2 == 0
        k = f(n/2)
        return 2 * k + n * n / 4
    else
        return f(n / 2) + f(n / 2 + 1) + ((n / 2) * (n / 2 + 1))
    end
end

n = gets.to_i
puts f(n)