cmd_mm/zsmalloc.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o mm/zsmalloc.ko mm/zsmalloc.o mm/zsmalloc.mod.o;  true
