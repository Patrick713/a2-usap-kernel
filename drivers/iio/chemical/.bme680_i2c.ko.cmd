cmd_drivers/iio/chemical/bme680_i2c.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/iio/chemical/bme680_i2c.ko drivers/iio/chemical/bme680_i2c.o drivers/iio/chemical/bme680_i2c.mod.o;  true
