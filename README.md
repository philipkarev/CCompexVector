  # Данный проект - это моё решение задачи, представленной ниже.
  
  Определить класс `CCompexVector` для работы с векторами комплексных чисел. Внутри класса вектор должен быть реализован с помощью указателя на тип `compex`.
  Длина вектора задаётся в конструкторе класса. В классе должны быть определены необходимые конструкторы (в том числе конструктор копирования перемещения), 
  деструктор, операторы присваивания (копированием и перемещением), сложения, вычитания, скалярного умножения, `<<`, инкремент `++` и декремент `--` (справа и слева),
  увеличивающий или уменьшающий (если это возможно) длину вектора на 1. Последние операторы в префиксной форме должны обрабатывать (дублировать или удалять)
  первый элемент вектора, в постпрефиксной - последний.
  При сложении и вычитании размер результата - это минимум из размеров исходных векторов. При скалярном умножении недостающие координаты считать нулевыми.
   
  
  _ P.S. Работа на ЭВМ, IV семестр механико-математическиго факультета МГУ, преподаватель - В.М.Староверов. Данная задача, которую я начал решать по ошибке,
   - это кусок бОльшей задачи с чисто виртуальной функцией и массивом фабрик. По сути, это просто реализация класса. _