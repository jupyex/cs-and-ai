## What is Machine Learning?
It is just simply about finding a suitable function. 
<img src="Pasted image 20230212163938.png">
And there are different types of functions, here are a few of them:
- Regression, where the function outputs a number. For instance, we use a regression function in prediction tasks.
<img src="Pasted image 20230212164542.png">
- Classification: Given different options, the function classifies it into the correct option.
<img src="Pasted image 20230212164844.png">
- Structured learning: Creating stuff (e.g., creating a piece of writing)

## Task: Predict the number of subscribers I will have tomorrow
### Step 1: Create a function which represents the number of views I will have tomorrow
This will be based on my domain knowledge. Let's say the function I created is (**linear model**)
$$y=b+wx_1$$
where $y$ is my number of views tomorrow, and $x_1$ is my number of views today (**feature**); $w$ represents the **weight** and $b$ represents the **bias**. Both $w$ and $b$ are both unknown parameters. They will be learnt through data.
### Step 2: Define loss from training data
<img src="Pasted image 20230212170556.png">
<img src="Pasted image 20230212170624.png">
### Step 3: Optimization
What? Finding the best set of $(w,b)$ 
<img src="Pasted image 20230212170718.png">
<img src="Pasted image 20230212170841.png">
<img src="Pasted image 20230212170859.png">
When to stop the iteration? I may set a maximum for the iteration or ... 
<img src="Pasted image 20230212171001.png">

## Glossary
- Hyperparameter: A parameter that we set.
