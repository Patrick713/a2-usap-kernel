cmd_net/sched/cls_u32.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/cls_u32.ko net/sched/cls_u32.o net/sched/cls_u32.mod.o;  true
