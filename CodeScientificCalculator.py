import math

# Constants
PI = math.pi

def to_hex(n):
    # hex() returns '0x...', we remove the prefix and capitalize
    return hex(int(n))[2:].upper()

def to_bin(n):
    # bin() returns '0b...', we remove the prefix
    return bin(int(n))[2:]

def print_menu():
    print("\n--- Scientific Calculator Menu ---")
    print("Basic Ops: +, -, *, /")
    print("Advanced Ops: ^ (power), root (n-th root)")
    print("Functions: sin, cos, tan, asin, acos, atan, ln, log10, sqrt, %")
    print("Conversions: base (dec to hex/bin), conv (deg <-> rad)")
    print("System: mode (switch DEG/RAD), clear, menu, exit")
    print("----------------------------------")

def main():
    result = 0.0
    is_rad = False
    
    print("Scientific Calculator Initialized. Type 'menu' for commands.")

    while True:
        mode_label = "[RAD]" if is_rad else "[DEG]"
        command = input(f"{mode_label} > ").strip().lower()

        if command == "exit":
            break
        elif command == "menu":
            print_menu()
            continue
        elif command == "clear":
            result = 0.0
            print("Cleared.")
            continue
        elif command == "mode":
            is_rad = not is_rad
            print(f"Mode switched to {'RADIANS' if is_rad else 'DEGREES'}.")
            continue
        elif command == "base":
            try:
                n = int(input("Enter Decimal Number: "))
                print(f"HEX: {to_hex(n)}")
                print(f"BIN: {to_bin(n)}")
            except ValueError:
                print("Error: Please enter a valid integer.")
            continue
        elif command == "conv":
            try:
                n = float(input("Value to convert: "))
                if is_rad:
                    print(f"{n} RAD = {math.degrees(n):.6f} DEG")
                else:
                    print(f"{n} DEG = {math.radians(n):.6f} RAD")
            except ValueError:
                print("Error: Invalid number.")
            continue

        # Mathematical Operations
        try:
            if command in ["sin", "cos", "tan"]:
                n = float(input(f"Value for {command}: "))
                angle = n if is_rad else math.radians(n)
                if command == "sin": result = math.sin(angle)
                elif command == "cos": result = math.cos(angle)
                elif command == "tan": result = math.tan(angle)

            elif command == "sqrt":
                n = float(input("Value for sqrt: "))
                result = math.sqrt(n)
                
            elif command == "ln":
                n = float(input("Value for ln: "))
                result = math.log(n)
                
            elif command == "log10":
                n = float(input("Value for log10: "))
                result = math.log10(n)

            elif command == "root":
                base = float(input("Base: "))
                index = float(input("Index: "))
                result = pow(base, 1.0/index)

            elif command == "+":
                n = float(input("Add: "))
                result += n
            elif command == "-":
                n = float(input("Subtract: "))
                result -= n
            elif command == "*":
                n = float(input("Multiply by: "))
                result *= n
            elif command == "/":
                n = float(input("Divide by: "))
                if n != 0:
                    result /= n
                else:
                    print("Error: Division by zero!")
                    continue
            elif command == "^":
                n = float(input("Power of: "))
                result = pow(result, n)
            elif command == "%":
                result = result / 100.0
            else:
                # If command is a number, set it as current result
                result = float(command)

            print(f"RESULT: {result:.6f}")

        except ValueError:
            print("Invalid Command or Number. Type 'menu' for help.")
        except Exception as e:
            print(f"An error occurred: {e}")

if __name__ == "__main__":
    main()