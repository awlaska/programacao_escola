namespace PWMosh
{
    class Program
    {
        static void Main()
        {
            // My First Program
            Console.WriteLine("\tMy First Program");
            Console.WriteLine("Hello World");
            
            // Demo of Variables and Constants
            Console.WriteLine("\n\tDemo of Variables and Constants");
            var _number = 2;            // byte
            var _count = 10;            // int
            var _totalPrice = 20.95f;   // float
            var _character = 'A';       // char
            var _firstName = "Mosh";    // String
            var _isWorking = false;     // bool
            
            Console.WriteLine("Byte: " + _number);
            Console.WriteLine("Int: " + _count);
            Console.WriteLine("Float: " + _totalPrice);
            Console.WriteLine("Char: " + _character);
            Console.WriteLine("String: " + _firstName);
            Console.WriteLine("Boolean: " + _isWorking);
            
            // Another One
            Console.WriteLine("\n\tMinimum and Maximum value on a: ");
            Console.WriteLine("Byte: {0} {1}", byte.MinValue, byte.MaxValue);
            Console.WriteLine("Float: {0} {1}", float.MinValue, float.MaxValue);
            
            // Constants
            Console.WriteLine("\n\tConstants");
            const float pi = 3.14f;
            Console.WriteLine("The constant Pi: " + pi);
            
            // Implicit Type Conversion
            Console.WriteLine("\n\tImplicit Type Conversions");
            int _i = 1;
            float _f = _i; // Will compile because float is "bigger" than integer in the number of bytes
            Console.WriteLine("Integer to a float: ", _f);

            Console.WriteLine("\tExplicit Type Conversions");
            //byte b = i; // Won't compile because byte is "smaller" than integer in the number of bytes
            byte _b = (byte)_i; // Casting
            Console.WriteLine("Casting an integer into a byte: " + _b);

            float _fl = 1.0f;
            int _in = (int)_fl;
            Console.WriteLine("Casting a float into an integer: " + _in);
            
            Console.WriteLine("\tNon-Compatible Type Conversions"); // Won't compile because the type is not compatible with an integer
            string _s = "1";
            //int _int = (int)_s;
            
            // The correct way
            int _int = Convert.ToInt32(_s);
            int _j = int.Parse(_s);
            Console.WriteLine("Converting a string into an integer: " + _int + " " + _j);
            
            //      Convert
            // toByte();    -> byte
            // ToInt16();   -> short
            // ToInt32();   -> integer
            // ToInt64();   -> long

            // When the conversion doesn't work, we can always throw an exception
            Console.WriteLine("\n\tExceptions: ");
            Console.WriteLine("\tException 1");
            try
            {
                var _numberToString = "1234";
                byte _byte = Convert.ToByte(_numberToString);
                Console.WriteLine(_byte);
            }
            catch (Exception)
            {
                Console.WriteLine("The number could not be converted to a byte.");
            }
            
            Console.WriteLine("\tException 2");
            try
            {
                string _str = "true";
                bool _boolean = Convert.ToBoolean(_str);
                Console.WriteLine(_boolean);
            }
            catch (Exception)
            {
                Console.WriteLine("The string could not be converted to a boolean.");
            }
            
            // Operators
            Console.WriteLine("\n\tArithmetic Operators");
            int _first = 10, _second = 5;
            
            int _add = _first + _second;
            int _subtract = _first - _second;
            int _multiply = _first * _second;
            int _divide = _first / _second;
            int _remainder = _first % _second;
            
            Console.WriteLine("+ Add: " + _add);
            Console.WriteLine("- Subtract: " + _subtract);
            Console.WriteLine("* Multiply: " + _multiply);
            Console.WriteLine("/ Divide: " + _divide);
            Console.WriteLine("% Remainder: " +_remainder);
            Console.WriteLine("Postfix Increment: b = a++ -> b = a && a = a + 1");
            Console.WriteLine("Postfix Decrement: b = a-- -> b = a && a = a - 1");
            Console.WriteLine("Prefix Increment: b = ++a -> b = a + 1 && a = a + 1");
            Console.WriteLine("Prefix Decrement: b = --a -> b = a - 1 && a = a - 1");
            
            Console.WriteLine("\n\tComparison Operators");
            Console.WriteLine("Equal ==");
            Console.WriteLine("Not equal !");
            Console.WriteLine("Greater than >");
            Console.WriteLine("Greater than or equal to >=");
            Console.WriteLine("Less than <");
            Console.WriteLine("Less than or equal to <=");
            
            Console.WriteLine("\n\tAssignment Operators");
            Console.WriteLine("Assignment =");
            Console.WriteLine("Addition assignment +=");
            Console.WriteLine("Subtraction assignment -=");
            Console.WriteLine("Multiplication assignment *=");
            Console.WriteLine("Division assignment /=");
            
            Console.WriteLine("\n\tLogical Operators");
            Console.WriteLine("And &&");
            Console.WriteLine("Or ||");
            Console.WriteLine("Not !");
            
            Console.WriteLine("\n\tBitwise Operators");
            Console.WriteLine("And &");
            Console.WriteLine("Or |");
            
            // Comments
            Console.WriteLine("// One line comment");
            Console.WriteLine("/* Multi-line \ncomments */");
        }
    }
}