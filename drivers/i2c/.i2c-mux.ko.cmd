cmd_drivers/i2c/i2c-mux.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/i2c/i2c-mux.ko drivers/i2c/i2c-mux.o drivers/i2c/i2c-mux.mod.o;  true
