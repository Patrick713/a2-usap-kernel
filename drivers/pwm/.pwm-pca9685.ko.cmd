cmd_drivers/pwm/pwm-pca9685.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/pwm/pwm-pca9685.ko drivers/pwm/pwm-pca9685.o drivers/pwm/pwm-pca9685.mod.o;  true
