cmd_drivers/iio/humidity/dht11.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/iio/humidity/dht11.ko drivers/iio/humidity/dht11.o drivers/iio/humidity/dht11.mod.o;  true