# get_next_line-tester

## Installation

```sh
git clone https://github.com/younesaassila/get_next_line-tester.git
cd get_next_line-tester
```

## Build

### Mandatory part

```sh
BUFFER_SIZE=42
cc -D BUFFER_SIZE=$BUFFER_SIZE -o tester tester.c ../get_next_line.c ../get_next_line_utils.c
```

### Bonus part

```sh
BUFFER_SIZE=42
cc -D BUFFER_SIZE=$BUFFER_SIZE -o tester tester.c ../get_next_line_bonus.c ../get_next_line_utils_bonus.c
```

## Usage

### File(s)

```sh
./tester <files>
```

### Standard input

```sh
./tester /dev/stdin
```
