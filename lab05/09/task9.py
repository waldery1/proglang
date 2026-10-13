import sys

def main():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    t = int(input_data[0])
    results = []
    
    idx = 1
    for _ in range(t):
        if idx + 7 >= len(input_data):
            break
            
        p1 = int(input_data[idx])
        q1 = int(input_data[idx+1])
        p2 = int(input_data[idx+2])
        q2 = int(input_data[idx+3])
        p3 = int(input_data[idx+4])
        q3 = int(input_data[idx+5])
        p4 = int(input_data[idx+6])
        q4 = int(input_data[idx+7])
        idx += 8
        
        num1 = p1 * q2 + p2 * q1
        den1 = q1 * q2
        
        num2 = p3 * q4 + p4 * q3
        den2 = q3 * q4
        
        left_side = num1 * den2
        right_side = num2 * den1
        
        if left_side > right_side:
            results.append("1")
        elif left_side == right_side:
            results.append("0")
        else:
            results.append("-1")
            
    print(" ".join(results))

if __name__ == '__main__':
    main()









