# 第11次课堂练习

本仓库包含第11次课堂练习的编程作业。

## 练习内容

### 练习1：PersonAction.cpp
设计一个学校接待方面的程序，使用多态实现不同身份人的食宿问题。

**身份及对应规则：**
- 学生：食堂就餐，宿舍休息
- 教师：教师食堂就餐，学校公寓休息
- 学生家长：招待所就餐，招待所休息
- 外宾：外宾接待室就餐，外宾宾馆休息
- 上级领导：贵宾餐厅就餐，贵宾楼休息

**编译和运行：**
```bash
g++ -o PersonAction PersonAction.cpp
./PersonAction
```

### 练习2：person.cpp
编写抽象基类Person和派生类Teacher、Hqry，实现计算学校每月工资总额的程序。

**要求：**
- 抽象基类Person包含默认构造函数、虚析构函数、纯虚函数getPay()
- Teacher类：按课时计算工资（每课时50元）
- Hqry类：固定工资3000元加奖金
- 实现totalPay函数计算工资总额

**编译和运行：**
```bash
g++ -o person person.cpp
./person
```

### 练习3：copyArray.cpp
编写函数模板Copy(a, b, n)，将数组b复制到数组a。

**测试数据：**
1. 整数数组：int Bint[6] = {1, 3, 5, 7, 9, 11}
2. 结构体数组：Student Bstudent[3] = {{100, 88}, {110, 76}, {130, 92}}

**编译和运行：**
```bash
g++ -o copyArray copyArray.cpp
./copyArray
```

## 编译全部程序

```bash
g++ -o PersonAction PersonAction.cpp
g++ -o person person.cpp
g++ -o copyArray copyArray.cpp
```

## 运行全部程序

```bash
./PersonAction
./person
./copyArray
```
