| Language |     Part 1    |     Part 2    | 
|:--------:|:-------------:|:-------------:|
|  C++     | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/3?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=3&branchName=master)              | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/12?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=12&branchName=master)              | 
|  C#      | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%201%20-%20C%23?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=4&branchName=master)              | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%202%20-%20C%23?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=6&branchName=master) | 
|  F#      | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%201%20-%20F%23?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=5&branchName=master)              | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%202%20-%20F%23?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=7&branchName=master) |
|  Go      | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%201%20-%20Go?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=8&branchName=master)              | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%202%20-%20Go?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=9&branchName=master) |
|  Rust    | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%201%20-%20Rust?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=10&branchName=master)              | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%202%20-%20Rust?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=11&branchName=master)              |
|  Swift   |  [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%202%20-%20Swift?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=15&branchName=master) | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%202%20-%20Swift?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=20&branchName=master) |
| Java     | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%201%20-%20Java?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=18&branchName=master) | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%202%20-%20Java?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=19&branchName=master) |
| Shell    | NA* | NA* |
| Python   | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%201%20-%20Python?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=21&branchName=master) | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%202%20-%20Python?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=22&branchName=master) |
| Cython   | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%201%20-Cython?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=23&branchName=master) | [![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%202%20-%20Cython?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=24&branchName=master) |

1. There is nothing to build for the shell variants and because these implementations are relatively slow they are not included in the benchmarks so we don't need to produce anything runnable by those pipelines.

The following benchmarks are run in Microsoft hosted Azure Pipeline agents so the performance can and will vary between runs depending on what machine they end up running on. Each group, Part 1, Part 2, etc is run on a single agent so the performance of implementations within that group can be compared with some meaning. Performance in the Azure environment is significantly worse than will be seen on modern desktop hardware.

## Part 1 Performance
[![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%201%20-%20Benchmark?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=13&branchName=master)

||100K orders|trades|
-|:-:|:-:|
|C#|0:00:00.533875|3368|
|Java|0:00:00.748286|3368|
|Rust|0:00:01.475892|3368|
|F#|0:00:06.873125|3368|
|Swift|0:00:09.107013|3368|
|C++|0:00:20.703071|3368|
|Go|0:00:45.364071|3368|
|Cython|0:02:12.206745|3368|
|Python|0:02:25.056872|3368|


## Part 2 Performance

The slower implementations are excluded from the larger benchmark just so it runs in a reasonable time.

[![Build Status](https://dev.azure.com/garyedwardhughes/Exchange/_apis/build/status/Part%202%20-%20Benchmark?branchName=master)](https://dev.azure.com/garyedwardhughes/Exchange/_build/latest?definitionId=14&branchName=master)

||100K orders|trades|
-|:-:|:-:|
|Rust|0:00:00.049043|3368|
|C++|0:00:00.055550|3368|
|Go|0:00:00.072851|3368|
|C#|0:00:00.158264|3368|
|Java|0:00:00.333367|3368|
|F#|0:00:00.345538|3368|
|Cython|0:00:01.290677|3368|
|Swift|0:00:01.792253|3368|
|Python|0:00:02.054521|3368|


||10M orders|trades|
-|:-:|:-:|
|Rust|0:00:05.916887|360131|
|C++|0:00:06.511045|360131|
|Go|0:00:09.094470|360131|
|Java|0:00:12.569665|360131|
|C#|0:00:15.568324|360131|
|F#|0:00:29.242019|360131|


