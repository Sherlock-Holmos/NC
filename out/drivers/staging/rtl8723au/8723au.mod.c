#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfccda823, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x99c816d5, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb8bb4bc6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1d92d898, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6828bd6c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x951efa5f, __VMLINUX_SYMBOL_STR(wakeup_source_add) },
	{ 0x6730ebc8, __VMLINUX_SYMBOL_STR(__pm_stay_awake) },
	{ 0xfaaf9692, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xb93d503e, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x4753b9b4, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xfa91eb38, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x36e54585, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x66ca5dcc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x3b2809ed, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x51cd9cad, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9e0e703c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc18ea50a, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc2ace531, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xabd359f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x90f4df4a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x65e15901, __VMLINUX_SYMBOL_STR(wakeup_source_prepare) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf3443c6, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x3da1edff, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xa83171f8, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x745d5a84, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xcc815aff, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x526c8c61, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xca832efe, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x649aa548, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1ce7e8a3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x1d02765d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x7c21fd96, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0x4c2a8115, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x61f4afd9, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc447b7b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x360ff19f, __VMLINUX_SYMBOL_STR(down) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x287726e6, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x73b82794, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0xcb699adb, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x1a84bfb2, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xf700990b, __VMLINUX_SYMBOL_STR(__pm_relax) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x2df54dc6, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x5237a82a, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x47eca0fa, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x567ac650, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xe440baa8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd5a318bd, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3d2edde1, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xf2edeec, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x7d389cb7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xd8b946de, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3c1b0cb6, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xa88177bb, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x324b3877, __VMLINUX_SYMBOL_STR(up) },
	{ 0xbf9fe88a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x5e3d4441, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x64ea2916, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x13547c68, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x59503cf, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x5aa13647, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x9fef0a8e, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xcb31bfd2, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xea0e097b, __VMLINUX_SYMBOL_STR(wakeup_source_drop) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x2a1b4066, __VMLINUX_SYMBOL_STR(wakeup_source_remove) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x9913008e, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0x5f61e882, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xba246a45, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xaef5ce8a, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp1724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0724d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "F68A2E8E5EDA9A8742A3811");
