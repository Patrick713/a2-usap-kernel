cmd_drivers/video/fbdev/udlfb.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/video/fbdev/udlfb.ko drivers/video/fbdev/udlfb.o drivers/video/fbdev/udlfb.mod.o;  true