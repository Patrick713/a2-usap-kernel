cmd_net/sched/cls_route.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/cls_route.ko net/sched/cls_route.o net/sched/cls_route.mod.o;  true
