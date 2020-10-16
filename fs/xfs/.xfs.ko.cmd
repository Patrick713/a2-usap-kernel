cmd_fs/xfs/xfs.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/xfs/xfs.ko fs/xfs/xfs.o fs/xfs/xfs.mod.o;  true
