cmd_drivers/iio/buffer/industrialio-buffer-cb.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/iio/buffer/industrialio-buffer-cb.ko drivers/iio/buffer/industrialio-buffer-cb.o drivers/iio/buffer/industrialio-buffer-cb.mod.o;  true