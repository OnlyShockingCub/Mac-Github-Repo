def main():
    rows, cols, max_cost = int(input()), int(input()), int(input())

    grid = [[((i * cols + j) % max_cost) + 1 for j in range(cols)] for i in range(rows)]

    min_costs = [grid[rows - 1][j] for j in range(cols)]
    #print(min_costs)

    for i in range(rows - 2, -1, -1):
        new_costs = [float('inf')] * cols
        for j in range(cols):
            for direction in [-1, 0, 1]:
                new_col = j + direction
                if 0 <= new_col < cols:
                    new_costs[j] = min(new_costs[j], grid[i][j] + min_costs[new_col])
        min_costs = new_costs
        #print(new_costs)

    print(min(min_costs))

main()
