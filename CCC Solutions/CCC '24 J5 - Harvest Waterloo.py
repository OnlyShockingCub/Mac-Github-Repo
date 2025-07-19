def main():
    R, C = int(input()), int(input())
    grid = [list(input()) for _ in range(R)]
    A, B = int(input()), int(input())

    values = {'S': 1, 'M': 5, 'L': 10}
    visited = [[False]*C for _ in range(R)]
    result = 0
    positions = [(A, B)]

    while positions:
        x, y = positions.pop()
        
        if not (0 <= x < R and 0 <= y < C):
            continue
        if visited[x][y] or grid[x][y] == '*':
            continue
        visited[x][y] = True
        if grid[x][y] in values:
            result += values[grid[x][y]]
        for dx, dy in [(-1,0),(1,0),(0,-1),(0,1)]:
            positions.append((x+dx, y+dy))

    print(result)

main()
