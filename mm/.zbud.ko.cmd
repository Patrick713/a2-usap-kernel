cmd_mm/zbud.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o mm/zbud.ko mm/zbud.o mm/zbud.mod.o;  true
