cmd_net/sched/sch_drr.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_drr.ko net/sched/sch_drr.o net/sched/sch_drr.mod.o;  true
