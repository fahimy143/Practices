def maximize_cookies(m, X, Y):
    n = len(X)
    dp = [0] * (m + 1)
    items = [[0] * (m + 1) for _ in range(n)]

    for i in range(n):
        weight, cost = X[i], Y[i]
        for j in range(m, cost - 1, -1):
            # Try buying 1 unit of this cookie
            if dp[j - cost] + weight > dp[j]:
                dp[j] = dp[j - cost] + weight
                items[i][j] = 1
            # Try buying 2 units of this cookie (if budget allows)
            if j >= 2 * cost and dp[j - 2 * cost] + 2 * weight > dp[j]:
                dp[j] = dp[j - 2 * cost] + 2 * weight
                items[i][j] = 2

    # Backtrack to find selected cookies
    selected = []
    budget = m
    for i in range(n - 1, -1, -1):
        if items[i][budget] > 0:
            selected.append((i + 1, items[i][budget])) 
            budget -= items[i][budget] * Y[i]

    return dp[m], selected


X = [60, 120, 40, 160, 100]
Y = [3, 5, 2, 8, 6]
m = 14

max_weight, selected_cookies = maximize_cookies(m, X, Y)
print("Maximum weight:", max_weight)
print("Selected cookies:", selected_cookies)
