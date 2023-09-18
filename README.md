# get_next_line-tester

## Installation

```sh
git clone https://github.com/younesaassila/get_next_line-tester.git
cd get_next_line-tester
```

## Build

### Mandatory part

```sh
find .. -maxdepth 1 -type f -name '*.c' ! -name '*_bonus.c' | xargs cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 -o tester tester.c
```

### Bonus part

```sh
find .. -maxdepth 1 -type f -name '*_bonus.c' | xargs cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 -o tester tester.c
```

## Usage

```sh
./tester <files>
```
