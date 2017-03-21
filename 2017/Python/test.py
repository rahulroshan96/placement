class Employee:
    'Common base class for all employees'
    empCount = 0

    def __init__(self, name, salary):
       self.name = name
       self.salary = salary
       Employee.empCount += 1


    def hello(self):
        print self.name, self.salary, Employee.empCount


e = Employee("rahul",100)
e.hello()
