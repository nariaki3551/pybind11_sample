import sequence.sequence_cpp

def fibonacci(n: int) -> int:
    print("python::", end="")
    return sequence.sequence_cpp.fibonacci(n)

if __name__ == "__main__":
    for i in range(10):
        print(f"fibonacci({i}) = {fibonacci(i)}")
